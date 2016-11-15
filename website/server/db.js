var mysql = require('mysql');

// ����һ�����ݿ����ӳ�
var pool = mysql.createPool({
    connectionLimit: 50,
    host: '127.0.0.1',
    user: 'root',
    password: '123456',
    database: 'tailin',
    port:'3306'
});


// SELECT * FROM users
// �����ǵķ���֧������ģʽ
// һ����ֻ����SQL���ͻص�����
// һ���Ǵ���SQL��䡢�������ݡ��ص�����

exports.query = function (sql, P, C) {
    var params = [];
    var callback;

    // ����û���������������������SQL��callback
    if (arguments.length == 2 && typeof arguments[1] == 'function') {
        callback = P;
    } else if (arguments.length == 3 && Array.isArray(arguments[1]) && typeof arguments[2] == 'function') {
        params = P;
        callback = C;
    } else {
        throw new Error('�Բ��𣬲���������ƥ����߲������ʹ���');
    }


    // ����û�������������������ô����SQL�Ͳ������顢�ص�����


    // �ӳ���������һ������ʹ�õ�����
    pool.getConnection(function (err, connection) {
        // Use the connection

        connection.query(sql, params, function () {
            // ʹ�����֮�󣬽��������ͷŻ����ӳ�
                connection.release();
            callback.apply(null, arguments);
        });
    });
};

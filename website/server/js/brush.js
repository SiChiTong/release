var BushEvent=NavEvent||{REVISION:"0.0.1.0-2016-11.16"};BushEvent.bushdata={mousePressed:!1,lastX:0,lastY:0,ctx:null,editMapID:"",mapEditcolor:"",mapEditlineWidth:""};
BushEvent.WorkPool=function(){this.EnableCanvasEdit=function(a){BushEvent.bushdata.editMapID=a;BushEvent.bushdata.ctx=document.getElementById(a).getContext("2d");document.getElementById(a).addEventListener("touchstart",mapTouchEvent,!1);document.getElementById(a).addEventListener("touchmove",mapTouchEvent,!1);document.getElementById(a).addEventListener("touchend",mapTouchEvent,!1);document.getElementById(a).addEventListener("mousedown",mapTouchEvent,!1);document.getElementById(a).addEventListener("mousemove",
mapTouchEvent,!1);document.getElementById(a).addEventListener("mouseup",mapTouchEvent,!1)};this.DisableCanvasEdit=function(){document.getElementById(BushEvent.bushdata.editMapID)&&(document.getElementById(BushEvent.bushdata.editMapID).removeEventListener("touchstart",mapTouchEvent,!1),document.getElementById(BushEvent.bushdata.editMapID).removeEventListener("touchmove",mapTouchEvent,!1),document.getElementById(BushEvent.bushdata.editMapID).removeEventListener("touchend",mapTouchEvent,!1),document.getElementById(BushEvent.bushdata.editMapID).removeEventListener("mousedown",
mapTouchEvent,!1),document.getElementById(BushEvent.bushdata.editMapID).removeEventListener("mousemove",mapTouchEvent,!1),document.getElementById(BushEvent.bushdata.editMapID).removeEventListener("mouseup",mapTouchEvent,!1))};this.clearArea=function(){BushEvent.bushdata.ctx.setTransform(1,0,0,1,0,0);BushEvent.bushdata.ctx.clearRect(0,0,BushEvent.bushdata.ctx.canvas.width,BushEvent.bushdata.ctx.canvas.height)}};
function mapTouchEvent(a){switch(a.type){case "touchstart":a.preventDefault();BushEvent.bushdata.mousePressed=!0;Draw(a.touches[0].clientX-$(this).offset().left,a.touches[0].clientY-$(this).offset().top,!1,BushEvent.bushdata.mapEditcolor,BushEvent.bushdata.mapEditlineWidth);break;case "mousedown":a.preventDefault();BushEvent.bushdata.mousePressed=!0;Draw(a.clientX-$(this).offset().left,a.clientY-$(this).offset().top,!1,BushEvent.bushdata.mapEditcolor,BushEvent.bushdata.mapEditlineWidth);break;case "touchmove":a.preventDefault();
BushEvent.bushdata.mousePressed&&Draw(a.touches[0].clientX-$(this).offset().left,a.touches[0].clientY-$(this).offset().top,!0,BushEvent.bushdata.mapEditcolor,BushEvent.bushdata.mapEditlineWidth);break;case "mousemove":a.preventDefault();BushEvent.bushdata.mousePressed&&Draw(a.clientX-$(this).offset().left,a.clientY-$(this).offset().top,!0,BushEvent.bushdata.mapEditcolor,BushEvent.bushdata.mapEditlineWidth);break;case "touchend":BushEvent.bushdata.mousePressed=!1;break;case "mouseup":BushEvent.bushdata.mousePressed=
!1}}function Draw(a,b,c,d,e){c&&(BushEvent.bushdata.ctx.beginPath(),BushEvent.bushdata.ctx.strokeStyle=d,BushEvent.bushdata.ctx.lineWidth=e,BushEvent.bushdata.ctx.lineJoin="round",BushEvent.bushdata.ctx.moveTo(BushEvent.bushdata.lastX,BushEvent.bushdata.lastY),BushEvent.bushdata.ctx.lineTo(a,b),BushEvent.bushdata.ctx.closePath(),BushEvent.bushdata.ctx.stroke());BushEvent.bushdata.lastX=a;BushEvent.bushdata.lastY=b}var BrushJobs=new BushEvent.WorkPool;
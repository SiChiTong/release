/*! tailinserver 2017-01-19 */
var BrushEvent=BrushEvent||{REVISION:"0.0.6.0-2016-12.22",mousePressed:!1,lastX:0,lastY:0,ctx:null,mapEditcolor:"black",mapEditlineWidth:5,Draw:function(a,b,c,d,e){c&&(this.ctx.beginPath(),this.ctx.strokeStyle=d,this.ctx.lineWidth=e,this.ctx.lineJoin="round",this.ctx.moveTo(this.lastX,this.lastY),this.ctx.lineTo(a,b),this.ctx.closePath(),this.ctx.stroke()),this.lastX=a,this.lastY=b},enableCanvasEdit:function(a){var b=document.getElementById(a);BrushEvent.ctx=b.getContext("2d"),$("#"+a).on("touchstart touchmove touchend",function(a){var b=$(this).offset().left,c=$(this).offset().top;switch(a.type){case"touchstart":a.preventDefault(),BrushEvent.mousePressed=!0,console.log(a.originalEvent.touches[0].clientX,a.originalEvent.touches[0].clientY),BrushEvent.Draw(a.originalEvent.touches[0].clientX-b,a.originalEvent.touches[0].clientY-c,!1,BrushEvent.mapEditcolor,BrushEvent.mapEditlineWidth);break;case"touchmove":a.preventDefault(),BrushEvent.mousePressed&&BrushEvent.Draw(a.originalEvent.touches[0].clientX-b,a.originalEvent.touches[0].clientY-c,!0,BrushEvent.mapEditcolor,BrushEvent.mapEditlineWidth);break;case"touchend":BrushEvent.mousePressed=!1}}),$("#"+a).on("mousedown mousemove mouseup",function(a){switch(a.type){case"mousedown":a.preventDefault(),BrushEvent.mousePressed=!0,BrushEvent.Draw(a.clientX-$(this).offset().left,a.clientY-$(this).offset().top,!1,BrushEvent.mapEditcolor,BrushEvent.mapEditlineWidth);break;case"mousemove":a.preventDefault(),BrushEvent.mousePressed&&BrushEvent.Draw(a.clientX-$(this).offset().left,a.clientY-$(this).offset().top,!0,BrushEvent.mapEditcolor,BrushEvent.mapEditlineWidth);break;case"mouseup":BrushEvent.mousePressed=!1}})},disableCanvasEdit:function(a){$("#"+a).off("touchstart touchmove touchend"),$("#"+a).off("mousedown mousemove mouseup")}};
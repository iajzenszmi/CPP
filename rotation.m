[X,Y,Z]=cylinder([0 .5],50 );
axis([0 1,-1 1,-.5 .5])
M=makehgtform('translate',[0,0,0],'xrotate',pi/4,'yrotate',pi/2);
h=surf(X,Y,Z,'Parent',hgtransform('Matrix',M),'LineStyle','none','FaceAlpha',0.4);
view([30,35])
grid on
light

from PIL import Image
from pylab import *
# read image to array
im = array(Image.open('miku.jpg').convert('L'))
# create a new figure
figure()
# dont use colors
gray()
# show contours with origin upper left corner
contour(im, origin='image')
axis('equal')
axis('off')
show()
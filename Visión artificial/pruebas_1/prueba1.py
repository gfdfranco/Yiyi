from PIL import Image
#Convierte a escala de grises
pil_im = Image.open('miku.jpg').convert('L')
#Recorta la imagen
#pil_im.thumbnail((128,128))

#Se crea una caja y se recorta imagen
box = (100,100,200,200)
region = pil_im.crop(box)
#La imagen se rota y se pega en la caja
region = region.transpose(Image.ROTATE_180)
pil_im.paste(region,box)

#cambiar tamano imagen
out = pil_im.resize((128,128))
#rotar imagen
out = pil_im.rotate(45)

pil_im.show()
out.show()
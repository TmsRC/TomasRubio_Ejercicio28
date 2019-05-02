import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

datos = np.loadtxt("datos.dat")

#print(datos.shape)

plt.figure(figsize=(20,10))
plt.subplot(1,2,1)
plt.imshow(datos)
plt.xlabel("Indice X")
plt.ylabel("Indice T")
plt.subplot(1,2,2)
plt.plot(datos[0])
plt.plot(datos[199])
plt.xlabel("Indice X")
plt.ylabel("Temperatura")
plt.savefig("resultados.png")
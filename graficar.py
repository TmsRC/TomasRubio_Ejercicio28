import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

datos = np.loadtxt("datos.dat")

#print(datos.shape)

plt.figure()
#plt.imshow(datos)
#plt.plot(datos[0])
plt.plot(datos[199])
plt.savefig("resultados.png")
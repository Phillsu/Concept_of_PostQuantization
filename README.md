# Symmetric and Asymmetric Quantization Formulas

## Symmetric Quantization

### Quantization
![Q(x)](https://latex.codecogs.com/svg.latex?Q(x)%20=%20\text{round}\left(\frac{x}{\alpha}\right))  

Where ![\alpha](https://latex.codecogs.com/svg.latex?\alpha) (scale factor) is calculated as:  

![alpha](https://latex.codecogs.com/svg.latex?\alpha%20=%20\frac{\max(|x|)}{2^{b-1}%20-%201})  

### Dequantization
![x'](https://latex.codecogs.com/svg.latex?x'%20=%20Q(x)%20\cdot%20\alpha)  

![Symmetric Quantization](https://github.com/Phillsu/Concept_of_PostQuantization/blob/main/symmetric.png)

---

## Asymmetric Quantization

### Quantization
![Q(x)](https://latex.codecogs.com/svg.latex?Q(x)%20=%20\text{round}\left(\frac{x}{\alpha}\right)%20+%20Z)  

Where ![\alpha](https://latex.codecogs.com/svg.latex?\alpha) (scale factor) is calculated as:  

![alpha](https://latex.codecogs.com/svg.latex?\alpha%20=%20\frac{\max(x)%20-%20\min(x)}{2^b%20-%201})  

Zero-point ![Z](https://latex.codecogs.com/svg.latex?Z) is computed as:  

![Z](https://latex.codecogs.com/svg.latex?Z%20=%20\text{round}\left(-\frac{\min(x)}{\alpha}\right))  

### Dequantization
![x'](https://latex.codecogs.com/svg.latex?x'%20=%20(Q(x)%20-%20Z)%20\cdot%20\alpha)  

![Asymmetric Quantization](https://github.com/Phillsu/Concept_of_PostQuantization/blob/main/asymmetric.png)
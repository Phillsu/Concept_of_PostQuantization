# Symmetric and Asymmetric Quantization Formulas

## Symmetric Quantization

### Quantization
$$
Q(x) = \text{round}\left(\frac{x}{\alpha}\right)
$$  

Where $\alpha$ (scale factor) is calculated as:  

$$
\alpha = \frac{\text{max}(|x|)}{2^{b-1} - 1}
$$

### Dequantization
$$
x' = Q(x) \cdot \alpha
$$

![image](https://github.com/Phillsu/Concept_of_PostQuantization/blob/main/symmetric.png)
---

## Asymmetric Quantization

### Quantization
$$
Q(x) = \text{round}\left(\frac{x}{\alpha}\right) + Z
$$  
Where $\alpha$ (scale factor) is calculated as:
  $$
  \alpha = \frac{\text{max}(x) - \text{min}(x)}{2^b - 1}
  $$
  $Z$ (zero-point):  
  $$
  Z = \text{round}\left(-\frac{\text{min}(x)}{\alpha}\right)
  $$

### Dequantization
$$
x' = (Q(x) - Z) \cdot \alpha
$$

![image](https://github.com/Phillsu/Concept_of_PostQuantization/blob/main/asymmetric.png)
---

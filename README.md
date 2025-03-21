這是你整理好的 MathJax 版本，你可以直接用在 GitHub Pages（如 index.md）。

<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.7/MathJax.js?config=TeX-MML-AM_CHTML">
</script>

# Symmetric and Asymmetric Quantization Formulas

## Symmetric Quantization

### Quantization
$$
Q(x) = \text{round}\left(\frac{x}{\alpha}\right)
$$  

Where \( \alpha \) (scale factor) is calculated as:  

$$
\alpha = \frac{\max(|x|)}{2^{b-1} - 1}
$$

### Dequantization
$$
x' = Q(x) \cdot \alpha
$$

![Symmetric Quantization](https://github.com/Phillsu/Concept_of_PostQuantization/blob/main/symmetric.png)

---

## Asymmetric Quantization

### Quantization
$$
Q(x) = \text{round}\left(\frac{x}{\alpha}\right) + Z
$$  

Where \( \alpha \) (scale factor) is calculated as:

$$
\alpha = \frac{\max(x) - \min(x)}{2^b - 1}
$$

Zero-point \( Z \) is computed as:

$$
Z = \text{round}\left(-\frac{\min(x)}{\alpha}\right)
$$

### Dequantization
$$
x' = (Q(x) - Z) \cdot \alpha
$$

![Asymmetric Quantization](https://github.com/Phillsu/Concept_of_PostQuantization/blob/main/asymmetric.png)

重要提醒：
	1.	這種寫法只適用於 GitHub Pages，不能在 README.md 中直接顯示數學公式。
	2.	如果要放在 GitHub 的 README.md，請改用 LaTeX 轉圖片的方法（方法 1）。
	3.	如果你想在 GitHub Issues 或 Discussions 用數學公式，請用 $...$（單行）或 $$...$$（區塊）。

你可以把這段內容存成 index.md，然後透過 GitHub Pages 部署，就能正常顯示數學公式！
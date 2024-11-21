import pandas as pd

# Data structured with categories
data_categorized = {
    "Category": [
        "Paper Title",
        "Machine Learning Algorithms/Techniques",
        "Machine Learning Algorithms/Techniques",
        "Accuracy",
        "F1-Score",
        "Precision",
        "Recall",
        "Dataset Used/URL",
        "Research Findings"
    ],
    "Details": [
        "Fake News Detection Using Machine Learning",
        "Ensemble Models: Bagging, AdaBoost",
        "Other Classifiers: XGBoost, RandomForest, ExtraTrees; Textual Feature Extraction: Bag of Words, N-grams, TF-IDF; Cosine Similarity",
        "Before Binary Classification: 39%; After Binary Classification: 70% for Bagging and AdaBoost",
        "Bagging and AdaBoost: 70%",
        "Bagging and AdaBoost: 70%",
        "Bagging and AdaBoost: 70%",
        "LIAR dataset from POLITIFACT.COM - Link: https://ssrn.com/abstract=3462938",
        "Reclassification to binary improved metrics; Bagging and AdaBoost performed best; TF-IDF and Cosine Similarity effective for feature extraction"
    ]
}

# Create DataFrame and save to Excel
df_categorized = pd.DataFrame(data_categorized)
df_categorized.to_excel("Fake_News_Detection_Paper_Summary_Categorized.xlsx", index=False)

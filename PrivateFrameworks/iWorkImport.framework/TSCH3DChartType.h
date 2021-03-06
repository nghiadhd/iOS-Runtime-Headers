/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartType : TSCH2DChartType

+ (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 chartType:(id)arg2 barShape:(int)arg3;
+ (id)allAnimationFilters;

- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 barShape:(int)arg2;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (id)animationFilters;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (id)categoryLabelPositioner;
- (int)chartBodyBoundsDefinition;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (id)columnShapeUIName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (unsigned int)depthRatioDimension;
- (BOOL)isHomogeneous;
- (int)labelOrientation;
- (Class)layoutClass;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (float)maxDepthRatio;
- (float)minDepthRatio;
- (struct CGSize { float x1; float x2; })minimumChartBodySize;
- (struct CGSize { float x1; float x2; })minimumChartBodySizeForTransformingGeometry;
- (BOOL)needsRefinementForInwardLayout;
- (unsigned int)presentationDimension;
- (Class)presetImagerClass;
- (id)renderers;
- (Class)repClass;
- (Class)sageGeometeryHelperClass;
- (float)sageMaxDepthRatio;
- (id)sceneWithChartInfo:(id)arg1 layoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; unsigned int x7; })arg2;
- (float)spiceMaxDepthRatio;
- (Class)stageClass;
- (BOOL)supportsAxisLabelsOrientation;
- (BOOL)supportsAxisLine;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsBevels;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsColumnShape;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsErrorBars;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIncrementalResize;
- (BOOL)supportsInterSetDepthGap;
- (BOOL)supportsMinorGridlines;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsShadowOffset;
- (BOOL)supportsTickmarks;
- (BOOL)supportsTrendLines;
- (BOOL)supportsValueAxisLabelsPosition;
- (id)valueLabelPositioner;

@end

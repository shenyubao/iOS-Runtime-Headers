/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

@interface UINavigationItemButtonView : UINavigationItemView {
    unsigned int _abbreviatedTitleIndex;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    BOOL _customBackgroundImageChangedToOrFromNil;
    UIImageView *_imageView;
    BOOL _pressed;
    int _style;
}

@property(setter=_setAbbreviatedTitleIndex:) unsigned int _abbreviatedTitleIndex;
@property(setter=_setTintColor:,retain) UIColor * _tintColor;

- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (unsigned int)_abbreviatedTitleIndex;
- (Class)_appearanceGuideClass;
- (id)_appearanceStorage;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_backButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (float)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (struct UIOffset { float x1; float x2; })_backButtonTitlePositionAdjustmentForBarMetrics:(int)arg1;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (BOOL)_canDrawContent;
- (id)_currentCustomBackgroundNeedsDarkening:(BOOL*)arg1;
- (id)_currentTextColorForBarStyle:(int)arg1;
- (id)_currentTextShadowColorForBarStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })_currentTextShadowOffsetForBarStyle:(int)arg1;
- (id)_defaultFont;
- (void)_drawBackground;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (id)_scriptingInfo;
- (void)_setAbbreviatedTitleIndex:(unsigned int)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_tintColor;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (float)_titleYAdjustmentCustomization;
- (BOOL)_useSilverLookForBarStyle:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
- (BOOL)customBackgroundImageChangedToOrFromNil;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasCustomBackgroundImage;
- (id)image;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pressed;
- (void)setPressed:(BOOL)arg1 initialPress:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (id)title;

@end

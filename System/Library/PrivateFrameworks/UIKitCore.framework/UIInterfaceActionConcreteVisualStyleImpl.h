/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIInterfaceActionConcreteVisualStyleImpl <NSObject>
@optional
-(double)actionSectionSpacing;
-(UIEdgeInsets*)actionSequenceEdgeInsets;
-(CGSize*)minimumActionContentSize;
-(CGSize*)maximumActionGroupContentSize;
-(BOOL)selectByPressGestureRequired;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg1;
-(id)actionClassificationLabelFontForViewState:(id)arg1;
-(id)actionClassificationLabelColorForViewState:(id)arg1;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
-(id)actionPropertiesAffectingLabelStyling;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
-(id)actionPropertiesAffectingImageViewStyling;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;

@required
-(UIEdgeInsets*)contentMargin;
-(id)actionTitleLabelColorForViewState:(id)arg1;
-(id)defaultScreen;
-(double)contentCornerRadius;
-(double)horizontalImageContentSpacing;
-(double)verticalImageContentSpacing;
-(double)minimumImageGapWidth;
-(id)actionTitleLabelFontForViewState:(id)arg1;
-(id)newActionBackgroundViewForViewState:(id)arg1;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1;

@end


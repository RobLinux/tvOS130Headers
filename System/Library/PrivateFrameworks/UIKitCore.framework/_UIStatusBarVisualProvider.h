/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIStatusBar;


@protocol _UIStatusBarVisualProvider <NSObject>
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
@optional
-(void)modeUpdatedFromMode:(long long)arg1;
-(void)orientationUpdatedFromOrientation:(long long)arg1;
-(void)styleUpdatedFromStyle:(long long)arg1;
-(void)avoidanceFrameUpdatedFromFrame:(CGRect)arg1;
-(void)sizeUpdatedFromSize:(CGSize)arg1;
-(id)willUpdateWithData:(id)arg1;
-(id)region:(id)arg1 willSetDisplayItems:(id)arg2;
-(void)dataUpdated:(id)arg1;
-(void)statusBarRegionsUpdated;
-(void)itemCreated:(id)arg1;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
-(BOOL)canFixupDisplayItemAttributes;

@required
+(CGSize*)intrinsicContentSizeForOrientation:(long long)arg1;
-(_UIStatusBar *)statusBar;
-(id)setupInContainerView:(id)arg1;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
-(id)styleAttributesForStyle:(long long)arg1;
-(void)setStatusBar:(id)arg1;

@end


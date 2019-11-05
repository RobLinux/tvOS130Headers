/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIButtonBarLayout.h>

@class NSMapTable, NSMutableArray, _UIButtonBarLayout, UIBarButtonItemGroup, UILayoutGuide;

@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout {

	NSMapTable* _itemLayoutMap;
	NSMutableArray* _itemLayouts;
	NSMutableArray* _configuredItemLayouts;
	_UIButtonBarLayout* _representativeLayout;
	BOOL _compact;
	BOOL _useGroupSizing;
	BOOL _suppressSpacing;
	UIBarButtonItemGroup* _group;
	UILayoutGuide* _groupSizeGuide;
	/*^block*/id _itemViewGenerator;

}

@property (nonatomic,readonly) UIBarButtonItemGroup * group;                //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * groupSizeGuide;              //@synthesize groupSizeGuide=_groupSizeGuide - In the implementation block
@property (assign,nonatomic) BOOL compact;                                  //@synthesize compact=_compact - In the implementation block
@property (assign,nonatomic) BOOL useGroupSizing;                           //@synthesize useGroupSizing=_useGroupSizing - In the implementation block
@property (assign,nonatomic) BOOL suppressSpacing;                          //@synthesize suppressSpacing=_suppressSpacing - In the implementation block
@property (nonatomic,copy) id itemViewGenerator;                            //@synthesize itemViewGenerator=_itemViewGenerator - In the implementation block
-(id)description;
-(UIBarButtonItemGroup *)group;
-(BOOL)compact;
-(void)_configure;
-(BOOL)_isSpace;
-(void)setCompact:(BOOL)arg1 ;
-(id)_itemLayouts;
-(BOOL)_isGroup;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(void)setSuppressSpacing:(BOOL)arg1 ;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItemGroup:(id)arg2 ;
-(void)setItemViewGenerator:(id)arg1 ;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2 ;
-(BOOL)shouldHoriziontallyCenterView:(id)arg1 ;
-(id)layoutForBarButtonItem:(id)arg1 ;
-(id)layoutsForSpacerItem:(id)arg1 ;
-(id)_effectiveLayout;
-(UILayoutGuide *)groupSizeGuide;
-(void)_addLayoutViews:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(BOOL)suppressSpacing;
-(BOOL)useGroupSizing;
-(id)itemViewGenerator;
-(id)_newLayoutForBarButtonItem:(id)arg1 useGroupSizing:(BOOL)arg2 ;
-(void)_iterateConfiguredLayouts:(/*^block*/id)arg1 ;
-(id)_representativeLayout;
@end


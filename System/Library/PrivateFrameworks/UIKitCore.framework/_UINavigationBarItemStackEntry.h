/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UINavigationItem, _UINavigationBarLayout;

@interface _UINavigationBarItemStackEntry : NSObject {

	BOOL _searchActive;
	UINavigationItem* _item;
	_UINavigationBarLayout* _normalLayout;
	_UINavigationBarLayout* _searchLayout;

}

@property (nonatomic,readonly) UINavigationItem * item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) _UINavigationBarLayout * activeLayout; 
@property (nonatomic,readonly) _UINavigationBarLayout * inactiveLayout; 
@property (assign,getter=isSearchActive,nonatomic) BOOL searchActive;                //@synthesize searchActive=_searchActive - In the implementation block
@property (nonatomic,retain) _UINavigationBarLayout * normalLayout;                  //@synthesize normalLayout=_normalLayout - In the implementation block
@property (nonatomic,retain) _UINavigationBarLayout * searchLayout;                  //@synthesize searchLayout=_searchLayout - In the implementation block
+(id)newEntryForItem:(id)arg1 ;
+(id)entryForItem:(id)arg1 replaceExistingWithNew:(BOOL)arg2 ;
-(id)description;
-(void)dealloc;
-(UINavigationItem *)item;
-(void)updateStateFromCounterpart:(id)arg1 ;
-(_UINavigationBarLayout *)activeLayout;
-(BOOL)isSearchActive;
-(_UINavigationBarLayout *)inactiveLayout;
-(void)setSearchActive:(BOOL)arg1 ;
-(_UINavigationBarLayout *)normalLayout;
-(void)setNormalLayout:(_UINavigationBarLayout *)arg1 ;
-(_UINavigationBarLayout *)searchLayout;
-(void)setSearchLayout:(_UINavigationBarLayout *)arg1 ;
@end

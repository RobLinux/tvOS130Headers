/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarWifiSignalView, _UIStatusBarImageView, _UIStatusBarStringView;

@interface _UIStatusBarWifiItem : _UIStatusBarItem {

	_UIStatusBarWifiSignalView* _signalView;
	_UIStatusBarImageView* _networkIconView;
	_UIStatusBarStringView* _rawStringView;

}

@property (nonatomic,retain) _UIStatusBarWifiSignalView * signalView;              //@synthesize signalView=_signalView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * networkIconView;              //@synthesize networkIconView=_networkIconView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * rawStringView;               //@synthesize rawStringView=_rawStringView - In the implementation block
+(id)iconDisplayIdentifier;
+(id)signalStrengthDisplayIdentifier;
+(id)rawDisplayIdentifier;
+(id)groupWithPriority:(long long)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2 ;
-(id)_fillColorForUpdate:(id)arg1 entry:(id)arg2 ;
-(_UIStatusBarWifiSignalView *)signalView;
-(_UIStatusBarStringView *)rawStringView;
-(void)_create_signalView;
-(void)_create_rawStringView;
-(void)setSignalView:(_UIStatusBarWifiSignalView *)arg1 ;
-(void)setRawStringView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarImageView *)networkIconView;
-(void)_create_networkIconView;
-(long long)_barCountForUpdate:(id)arg1 ;
-(double)_barThicknessForUpdate:(id)arg1 ;
-(double)_interspaceForUpdate:(id)arg1 ;
-(double)_totalWidthForUpdate:(id)arg1 ;
-(void)setNetworkIconView:(_UIStatusBarImageView *)arg1 ;
@end


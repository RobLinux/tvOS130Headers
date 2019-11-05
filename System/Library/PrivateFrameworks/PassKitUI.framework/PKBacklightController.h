/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClient, NSHashTable;

@interface PKBacklightController : NSObject {

	BrightnessSystemClient* _brightnessClient;
	BOOL _foregroundActive;
	NSHashTable* _requesters;
	NSHashTable* _allowers;
	BOOL _isBacklightRamped;

}
+(id)sharedInstance;
-(id)init;
-(void)beginAllowingBacklightRamping:(id)arg1 ;
-(void)endAllowingBacklightRamping:(id)arg1 ;
-(void)endRequestingBacklightRamping:(id)arg1 ;
-(void)beginRequestingBacklightRamping:(id)arg1 ;
-(void)_changeBacklightMinimumEnabledIfNecessary;
-(void)_updateBacklightNits:(float)arg1 period:(double)arg2 ;
@end


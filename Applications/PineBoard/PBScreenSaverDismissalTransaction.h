/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PineBoard-Structs.h>
#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController;

@interface PBScreenSaverDismissalTransaction : BSTransaction {

	BOOL _animated;
	BOOL _shouldUpdateWallpaper;
	BOOL _shouldApplyStartValues;
	PBScreenSaverContentPresentingViewController* _screenSaverViewController;
	SCD_Struct_PB7 _context;

}

@property (nonatomic,readonly) SCD_Struct_PB8 context;                                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PBScreenSaverContentPresentingViewController * screenSaverViewController;              //@synthesize screenSaverViewController=_screenSaverViewController - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                                                       //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) BOOL shouldUpdateWallpaper;                                                            //@synthesize shouldUpdateWallpaper=_shouldUpdateWallpaper - In the implementation block
@property (nonatomic,readonly) BOOL shouldApplyStartValues;                                                           //@synthesize shouldApplyStartValues=_shouldApplyStartValues - In the implementation block
-(SCD_Struct_PB8)context;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(BOOL)isAnimated;
-(id)initWithScreenSaverViewController:(id)arg1 animated:(BOOL)arg2 updateWallpaper:(BOOL)arg3 applyStartValues:(BOOL)arg4 ;
-(void)_prepareKioskAnimationInTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_defaultAppAnimationTransaction;
-(PBScreenSaverContentPresentingViewController *)screenSaverViewController;
-(BOOL)shouldUpdateWallpaper;
-(BOOL)shouldApplyStartValues;
@end


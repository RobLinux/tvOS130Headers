/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController;

@interface _PBScreenSaverDismissalScreenshotTransaction : BSTransaction {

	BOOL _shouldUpdateWallpaper;
	PBScreenSaverContentPresentingViewController* _screenSaverViewController;

}

@property (assign,nonatomic) BOOL shouldUpdateWallpaper;                                                            //@synthesize shouldUpdateWallpaper=_shouldUpdateWallpaper - In the implementation block
@property (nonatomic,retain) PBScreenSaverContentPresentingViewController * screenSaverViewController;              //@synthesize screenSaverViewController=_screenSaverViewController - In the implementation block
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)setScreenSaverViewController:(PBScreenSaverContentPresentingViewController *)arg1 ;
-(void)setShouldUpdateWallpaper:(BOOL)arg1 ;
-(PBScreenSaverContentPresentingViewController *)screenSaverViewController;
-(BOOL)shouldUpdateWallpaper;
@end


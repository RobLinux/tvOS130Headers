/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBPIPRootViewControllerDelegate <NSObject>
@required
-(void)rootViewController:(id)arg1 didStopPictureInPictureForApplication:(id)arg2;
-(void)rootViewController:(id)arg1 didCancelPictureInPictureForApplication:(id)arg2;
-(void)rootViewController:(id)arg1 didUpdatePresentationState:(unsigned long long)arg2;
-(void)rootViewController:(id)arg1 didRequestEditingControlsDismissalWithStyle:(long long)arg2;
-(void)rootViewController:(id)arg1 didMovePictureInPictureToQuadrant:(long long)arg2;
-(void)rootViewControllerDidRequestTogglePlayPause:(id)arg1;

@end


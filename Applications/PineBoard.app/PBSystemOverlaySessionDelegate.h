/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSystemOverlaySessionDelegate <NSObject>
@required
-(void)systemOverlaySessionWillPresent:(id)arg1;
-(void)systemOverlaySessionDidPresent:(id)arg1;
-(void)systemOverlaySessionWillDismiss:(id)arg1 withContext:(id)arg2;
-(void)systemOverlaySessionDidDismiss:(id)arg1;
-(void)systemOverlaySessionDidCancel:(id)arg1 withContext:(id)arg2;
-(void)systemOverlaySessionDidInvalidate:(id)arg1;

@end


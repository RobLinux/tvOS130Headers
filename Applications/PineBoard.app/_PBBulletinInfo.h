/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBRemoteBulletinViewController;

@interface _PBBulletinInfo : NSObject {

	double _timeoutInSeconds;
	PBRemoteBulletinViewController* _viewController;

}

@property (assign,nonatomic) double timeoutInSeconds;                                      //@synthesize timeoutInSeconds=_timeoutInSeconds - In the implementation block
@property (nonatomic,retain) PBRemoteBulletinViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(PBRemoteBulletinViewController *)arg1 ;
-(PBRemoteBulletinViewController *)viewController;
-(double)timeoutInSeconds;
-(void)setTimeoutInSeconds:(double)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSDictionary;

@interface VUIActionLocationPrompt : VUIAction {

	BOOL _geoLocationEnforced;
	/*^block*/id _completionHandler;
	NSDictionary* _dialogMetrics;

}

@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL geoLocationEnforced;                  //@synthesize geoLocationEnforced=_geoLocationEnforced - In the implementation block
@property (nonatomic,retain) NSDictionary * dialogMetrics;              //@synthesize dialogMetrics=_dialogMetrics - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 ;
-(void)_locationAuthorizationStatusDidChange:(id)arg1 ;
-(NSDictionary *)dialogMetrics;
-(BOOL)geoLocationEnforced;
-(void)setGeoLocationEnforced:(BOOL)arg1 ;
-(void)setDialogMetrics:(NSDictionary *)arg1 ;
@end


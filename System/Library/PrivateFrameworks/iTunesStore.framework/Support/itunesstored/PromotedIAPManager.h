/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PromotedIAPDatabase;

@interface PromotedIAPManager : NSObject {

	PromotedIAPDatabase* _database;

}
+(id)sharedInstance;
-(id)init;
-(void)getOrderForIAPsInApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOrderForIAPs:(id)arg1 app:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getVisibilityForIAPs:(id)arg1 app:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setVisibility:(long long)arg1 forIAP:(id)arg2 app:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getInfoInternalForApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeOverridesForApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


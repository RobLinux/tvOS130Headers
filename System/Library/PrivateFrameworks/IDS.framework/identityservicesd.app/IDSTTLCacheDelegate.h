/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSTTLCacheDelegate <NSObject>
@optional
-(void)ttlCache:(id)arg1 didCacheObject:(id)arg2 forKey:(id)arg3;
-(void)ttlCache:(id)arg1 willReturnCachedObject:(id)arg2 forKey:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)ttlCache:(id)arg1 shouldEvictObject:(id)arg2 forKey:(id)arg3;
-(void)ttlCache:(id)arg1 didEvictObject:(id)arg2 forKey:(id)arg3;
-(BOOL)shouldTTLCacheEvictExpiredItems:(id)arg1;

@end


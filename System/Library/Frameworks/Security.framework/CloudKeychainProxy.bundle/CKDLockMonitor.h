/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDLockMonitor <NSObject>
@property (readonly) BOOL unlockedSinceBoot; 
@property (readonly) BOOL locked; 
@required
-(BOOL)locked;
-(BOOL)unlockedSinceBoot;
-(void)recheck;
-(void)connectTo:(id)arg1;

@end


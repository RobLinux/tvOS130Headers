/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/PlugIns/setoken.appex/setoken
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenDelegate <NSObject>
@optional
-(void)token:(id)arg1 terminateSession:(id)arg2;

@required
-(id)token:(id)arg1 createSessionWithError:(id*)arg2;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject

@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * statusText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
+(id)safe_initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(void)setStatusText:(NSString *)arg1 ;
-(NSString *)statusText;
-(id)initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3 ;
@end

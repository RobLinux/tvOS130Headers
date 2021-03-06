/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/CoreAnalyticsEventProtocol.h>

@class NSString;

@interface PMCoreAnalyticsEvent : NSObject <CoreAnalyticsEventProtocol> {

	BOOL _appendBundleName;

}

@property (assign,nonatomic) BOOL appendBundleName;                 //@synthesize appendBundleName=_appendBundleName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleForAnalytics;
-(id)eventName;
-(id)eventPayload;
-(void)sendToCoreAnalytics;
-(BOOL)appendBundleName;
-(void)setAppendBundleName:(BOOL)arg1 ;
@end


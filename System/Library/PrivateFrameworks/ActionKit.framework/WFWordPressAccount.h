/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFPasswordAccount.h>

@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount {

	NSURL* _endpointURL;

}

@property (nonatomic,copy) NSURL * endpointURL;              //@synthesize endpointURL=_endpointURL - In the implementation block
+(unsigned long long)modelVersion;
+(id)serviceID;
+(id)localizedServiceName;
+(BOOL)allowsMultipleAccounts;
+(id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3 ;
-(BOOL)isValid;
-(id)localizedName;
-(NSURL *)endpointURL;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/NSCopying.h>
#import <CoreServices/NSSecureCoding.h>

@class NSDictionary, NSURL, BSServiceConnectionEndpoint;

@interface _LSOpenConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _ignoreAppLinkEnabledProperty;
	BOOL _sensitive;
	BOOL _allowURLOverrides;
	NSDictionary* _frontBoardOptions;
	NSURL* _referrerURL;
	BSServiceConnectionEndpoint* _targetConnectionEndpoint;

}

@property (nonatomic,copy) NSDictionary * frontBoardOptions;                                      //@synthesize frontBoardOptions=_frontBoardOptions - In the implementation block
@property (assign,nonatomic) BOOL ignoreOpenStrategy; 
@property (assign,nonatomic) BOOL ignoreAppLinkEnabledProperty;                                   //@synthesize ignoreAppLinkEnabledProperty=_ignoreAppLinkEnabledProperty - In the implementation block
@property (nonatomic,copy) NSURL * referrerURL;                                                   //@synthesize referrerURL=_referrerURL - In the implementation block
@property (assign,getter=isSensitive,nonatomic) BOOL sensitive;                                   //@synthesize sensitive=_sensitive - In the implementation block
@property (assign,nonatomic) BOOL allowURLOverrides;                                              //@synthesize allowURLOverrides=_allowURLOverrides - In the implementation block
@property (nonatomic,retain) BSServiceConnectionEndpoint * targetConnectionEndpoint;              //@synthesize targetConnectionEndpoint=_targetConnectionEndpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(BSServiceConnectionEndpoint *)targetConnectionEndpoint;
-(void)setFrontBoardOptions:(NSDictionary *)arg1 ;
-(void)setTargetConnectionEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
-(void)setSensitive:(BOOL)arg1 ;
-(NSDictionary *)frontBoardOptions;
-(BOOL)isSensitive;
-(BOOL)allowURLOverrides;
-(BOOL)ignoreAppLinkEnabledProperty;
-(void)setIgnoreAppLinkEnabledProperty:(BOOL)arg1 ;
-(BOOL)ignoreOpenStrategy;
-(void)setIgnoreOpenStrategy:(BOOL)arg1 ;
-(void)setAllowURLOverrides:(BOOL)arg1 ;
@end

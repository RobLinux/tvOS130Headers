/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSCopying.h>

@class NSString, NSNumber;

@interface AppReceiptTaskOptions : NSObject <NSCopying> {

	BOOL _needsAuthentication;
	BOOL _performSinfMirartionCheckBeforeFailing;
	BOOL _skipAttribution;
	unsigned long long _receiptFlags;
	NSString* _bundleIdentifier;
	long long _authenticationPromptStyle;
	NSNumber* _targetAccountID;

}

@property (assign,nonatomic) unsigned long long receiptFlags;                          //@synthesize receiptFlags=_receiptFlags - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) long long authenticationPromptStyle;                      //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) BOOL needsAuthentication;                                 //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign,nonatomic) BOOL performSinfMirartionCheckBeforeFailing;              //@synthesize performSinfMirartionCheckBeforeFailing=_performSinfMirartionCheckBeforeFailing - In the implementation block
@property (nonatomic,readonly) NSString * URLBagKey; 
@property (assign,nonatomic) BOOL skipAttribution;                                     //@synthesize skipAttribution=_skipAttribution - In the implementation block
@property (nonatomic,copy) NSNumber * targetAccountID;                                 //@synthesize targetAccountID=_targetAccountID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)needsAuthentication;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(NSString *)URLBagKey;
-(long long)authenticationPromptStyle;
-(void)setAuthenticationPromptStyle:(long long)arg1 ;
-(void)setSkipAttribution:(BOOL)arg1 ;
-(void)setReceiptFlags:(unsigned long long)arg1 ;
-(id)initWithReceiptFlags:(unsigned long long)arg1 ;
-(unsigned long long)receiptFlags;
-(BOOL)performSinfMirartionCheckBeforeFailing;
-(void)setPerformSinfMirartionCheckBeforeFailing:(BOOL)arg1 ;
-(BOOL)skipAttribution;
-(NSNumber *)targetAccountID;
-(void)setTargetAccountID:(NSNumber *)arg1 ;
@end

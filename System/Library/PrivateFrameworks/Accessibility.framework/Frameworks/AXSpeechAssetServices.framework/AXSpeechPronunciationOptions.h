/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpeechAssetServices/NSSecureCoding.h>

@class NSString;

@interface AXSpeechPronunciationOptions : NSObject <NSSecureCoding> {

	NSString* _orthography;
	NSString* _language;

}

@property (nonatomic,retain) NSString * orthography;              //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,retain) NSString * language;                 //@synthesize language=_language - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)orthography;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
@end


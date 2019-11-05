/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSString, NSArray;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata {

	NSString* _type;
	NSArray* _customUTIs;

}

@property (nonatomic,readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * customUTIs;              //@synthesize customUTIs=_customUTIs - In the implementation block
@property (nonatomic,readonly) NSArray * UTIs; 
+(BOOL)supportsSecureCoding;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
-(NSArray *)UTIs;
-(NSArray *)customUTIs;
@end


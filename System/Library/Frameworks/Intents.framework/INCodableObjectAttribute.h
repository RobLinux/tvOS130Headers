/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <Intents/NSSecureCoding.h>

@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding> {

	NSString* _originalTypeName;
	NSString* _typeName;

}

@property (setter=_setOriginalTypeName:,nonatomic,copy) NSString * _originalTypeName;              //@synthesize originalTypeName=_originalTypeName - In the implementation block
@property (nonatomic,copy) NSString * typeName;                                                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,readonly) NSValueTransformer * valueTransformer; 
@property (nonatomic,copy,readonly) NSString * className; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)className;
-(Class)objectClass;
-(long long)valueType;
-(NSString *)typeName;
-(void)setClassName:(NSString *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)_originalTypeName;
-(Class)resolutionResultClass;
-(NSValueTransformer *)valueTransformer;
-(Class)_relationshipValueTransformerClass;
-(void)_setOriginalTypeName:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSArray;

@interface SSBagKey : NSObject {

	id<NSObject> _defaultValue;
	NSArray* _stringRepresentation;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) id<NSObject> defaultValue;                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) NSArray * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;                //@synthesize valueType=_valueType - In the implementation block
-(id<NSObject>)defaultValue;
-(NSArray *)stringRepresentation;
-(unsigned long long)valueType;
-(id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 ;
-(id)valueFromDictionary:(id)arg1 ;
@end


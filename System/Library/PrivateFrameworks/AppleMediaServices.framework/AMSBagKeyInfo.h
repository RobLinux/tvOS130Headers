/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface AMSBagKeyInfo : NSObject {

	NSString* _bagKey;
	id<NSObject> _defaultValue;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) NSString * bagKey;                         //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,readonly) id<NSObject> defaultValue;                 //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;              //@synthesize valueType=_valueType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<NSObject>)defaultValue;
-(unsigned long long)valueType;
-(NSString *)bagKey;
-(id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSURI;

@interface IDSHandle : NSObject {

	IDSURI* _URI;
	BOOL _isUserVisible;
	long long _validationStatus;

}

@property (nonatomic,readonly) IDSURI * URI;                            //@synthesize URI=_URI - In the implementation block
@property (nonatomic,readonly) BOOL isUserVisible;                      //@synthesize isUserVisible=_isUserVisible - In the implementation block
@property (nonatomic,readonly) long long validationStatus;              //@synthesize validationStatus=_validationStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(IDSURI *)URI;
-(BOOL)isUserVisible;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(long long)validationStatus;
-(id)initWithURI:(id)arg1 isUserVisible:(BOOL)arg2 validationStatus:(long long)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPBTLERequest, HAPBTLETransactionIdentifier, NSData, NSMutableData;

@interface HAPBTLEResponse : HMFObject {

	BOOL _headerComplete;
	unsigned char _statusCode;
	HAPBTLERequest* _request;
	HAPBTLETransactionIdentifier* _identifier;
	NSData* _body;
	unsigned long long _bodyLength;
	NSMutableData* __internalBody;

}

@property (assign,getter=isHeaderComplete,nonatomic) BOOL headerComplete;                         //@synthesize headerComplete=_headerComplete - In the implementation block
@property (nonatomic,copy) NSData * body;                                                         //@synthesize body=_body - In the implementation block
@property (setter=_setInternalBody:,nonatomic,retain) NSMutableData * _internalBody;              //@synthesize _internalBody=__internalBody - In the implementation block
@property (nonatomic,readonly) HAPBTLERequest * request;                                          //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) HAPBTLETransactionIdentifier * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (getter=isBodyComplete,nonatomic,readonly) BOOL bodyComplete; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) unsigned long long bodyLength;                                     //@synthesize bodyLength=_bodyLength - In the implementation block
@property (nonatomic,readonly) unsigned char statusCode;                                          //@synthesize statusCode=_statusCode - In the implementation block
-(id)debugDescription;
-(id)description;
-(id)init;
-(BOOL)isValid;
-(HAPBTLETransactionIdentifier *)identifier;
-(HAPBTLERequest *)request;
-(unsigned char)statusCode;
-(BOOL)isComplete;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(BOOL)isEncrypted;
-(id)initWithRequest:(id)arg1 ;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned long long)bodyLength;
-(BOOL)isHeaderComplete;
-(BOOL)isBodyComplete;
-(NSMutableData *)_internalBody;
-(unsigned long long)_deserializeHeaderWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_remainingBodyLength;
-(void)_setInternalBody:(id)arg1 ;
-(unsigned long long)_deserializeHeaderBodyLengthWithData:(id)arg1 error:(id*)arg2 ;
-(void)setHeaderComplete:(BOOL)arg1 ;
-(unsigned long long)appendData:(id)arg1 error:(id*)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/SignatureFormatter.h>

@class NSData, NSString;

@interface NGMPrekeySignatureFormatter : NSObject <SignatureFormatter> {

	double _timestamp;
	NSData* _prekeyPublic;

}

@property (nonatomic,readonly) NSData * prekeyPublic;               //@synthesize prekeyPublic=_prekeyPublic - In the implementation block
@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(id)signedData;
-(id)initToSignKey:(id)arg1 ;
-(NSData *)prekeyPublic;
-(id)initWithPublicPrekey:(id)arg1 ;
@end


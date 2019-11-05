/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SecDbKeychainSerializedAKSWrappedKey, NSData;

@interface SecDbKeychainAKSWrappedKey : NSObject {

	SecDbKeychainSerializedAKSWrappedKey* _serializedHolder;

}

@property (readonly) NSData * wrappedKey; 
@property (readonly) NSData * refKeyBlob; 
@property (readonly) unsigned type; 
@property (readonly) NSData * serializedRepresentation; 
-(NSData *)refKeyBlob;
-(id)initRegularWrappedKeyWithData:(id)arg1 ;
-(id)initRefKeyWrappedKeyWithData:(id)arg1 refKeyBlob:(id)arg2 ;
-(unsigned)type;
-(id)initWithData:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(NSData *)wrappedKey;
@end


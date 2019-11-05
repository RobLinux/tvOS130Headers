/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNetService, NSString;

@interface ATHostNetService : NSObject {

	NSNetService* _netService;
	NSString* _libraryIdentifier;

}

@property (nonatomic,readonly) NSNetService * netService;                 //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) NSString * libraryIdentifier;              //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
-(id)initWithNetService:(id)arg1 ;
-(NSNetService *)netService;
-(NSString *)libraryIdentifier;
@end

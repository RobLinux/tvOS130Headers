/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSURLHostNameAddressInfo : NSObject {

	double timestamp;
	addrinfo* addressInfo;

}
+(id)addressInfoForHost:(id)arg1 ;
+(void)asyncResolveWithCallbackClient:(id)arg1 ;
-(void)dealloc;
-(double)_timestamp;
-(id)_initWithAddressInfo:(addrinfo*)arg1 ;
-(addrinfo*)addrinfo;
@end


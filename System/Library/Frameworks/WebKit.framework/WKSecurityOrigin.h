/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSString;

@interface WKSecurityOrigin : NSObject <WKObject> {

	ObjectStorage<API::SecurityOrigin> _securityOrigin;

}

@property (nonatomic,copy,readonly) NSString * protocol; 
@property (nonatomic,copy,readonly) NSString * host; 
@property (nonatomic,readonly) long long port; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(NSString *)description;
-(void)dealloc;
-(NSString *)host;
-(long long)port;
-(NSString *)protocol;
-(Object*)_apiObject;
@end


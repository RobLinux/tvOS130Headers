/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSXPCInterface;


@protocol FMNSXPCConnectionConfigurable <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) NSXPCInterface * remoteInterface; 
@property (nonatomic,readonly) NSXPCInterface * exportedInterface; 
@property (nonatomic,readonly) BOOL machService; 
@required
-(unsigned long long)options;
-(NSXPCInterface *)exportedInterface;
-(NSString *)serviceName;
-(BOOL)machService;
-(NSXPCInterface *)remoteInterface;

@end


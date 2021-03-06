/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:43 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLActivityLoggerProtocol.h>

@class NSString;

@interface CLActivityLoggerAdapter : CLIntersiloService <CLActivityLoggerProtocol> {

	CLActivityLogger* _logger;

}

@property (assign,nonatomic) CLActivityLogger* logger;              //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(CLActivityLogger*)logger;
-(void)beginService;
-(void)endService;
-(void)setLogger:(CLActivityLogger*)arg1 ;
-(void)logData:(id)arg1 ;
@end


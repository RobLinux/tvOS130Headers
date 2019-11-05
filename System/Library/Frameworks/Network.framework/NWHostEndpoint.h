/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWHostEndpoint : NWEndpoint

@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSString * port; 
+(unsigned)endpointType;
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
-(NSString *)port;
-(NSString *)hostname;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:10:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAudioStatistics.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAudioStatistics.dylib/libAudioStatistics.dylib-Structs.h>
@class NSDictionary, NSString, NSArray;

@interface CAReportingPerformanceObject : NSObject {

	unsigned short _serviceType;
	NSDictionary* _performanceMetrics;
	NSDictionary* _configuration;
	NSString* _perfDataPath;
	NSString* _perfDataName;
	pc_sessionRef _session;
	NSArray* _processIdentifiers;

}

@property (retain) NSString * perfDataPath;                                    //@synthesize perfDataPath=_perfDataPath - In the implementation block
@property (retain) NSString * perfDataName;                                    //@synthesize perfDataName=_perfDataName - In the implementation block
@property (assign) pc_sessionRef session;                                      //@synthesize session=_session - In the implementation block
@property (retain) NSArray * processIdentifiers;                               //@synthesize processIdentifiers=_processIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDictionary * performanceMetrics;              //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
@property (assign,nonatomic) unsigned short serviceType;                       //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSDictionary * configuration;                     //@synthesize configuration=_configuration - In the implementation block
-(pc_sessionRef)session;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(void)begin;
-(void)setSession:(pc_sessionRef)arg1 ;
-(void)setServiceType:(unsigned short)arg1 ;
-(unsigned short)serviceType;
-(id)initWithProcessIdentifiers:(id)arg1 ;
-(id)endAndReturnPerformanceMetrics;
-(NSDictionary *)performanceMetrics;
-(NSString *)perfDataPath;
-(void)setPerfDataPath:(NSString *)arg1 ;
-(NSString *)perfDataName;
-(void)setPerfDataName:(NSString *)arg1 ;
-(NSArray *)processIdentifiers;
-(void)setProcessIdentifiers:(NSArray *)arg1 ;
@end


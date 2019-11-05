/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSDSignedManifest, MSDContentServer, NSMutableArray;

@interface MSDAppDataUpdater : NSObject {

	MSDSignedManifest* _manifest;
	MSDContentServer* _server;
	NSMutableArray* _stagedContainers;
	NSMutableArray* _processedGroupContainer;

}

@property (nonatomic,retain) NSMutableArray * stagedContainers;                     //@synthesize stagedContainers=_stagedContainers - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedGroupContainer;              //@synthesize processedGroupContainer=_processedGroupContainer - In the implementation block
@property (nonatomic,retain) MSDSignedManifest * manifest;                          //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,retain) MSDContentServer * server;                             //@synthesize server=_server - In the implementation block
+(id)sharedInstance;
-(id)init;
-(MSDContentServer *)server;
-(void)setServer:(MSDContentServer *)arg1 ;
-(MSDSignedManifest *)manifest;
-(void)setManifest:(MSDSignedManifest *)arg1 ;
-(BOOL)updateAllSystemAppData:(id*)arg1 ;
-(void)setProcessedGroupContainer:(NSMutableArray *)arg1 ;
-(BOOL)shouldSkip:(id)arg1 ;
-(BOOL)updateAppData:(id)arg1 error:(id*)arg2 ;
-(void)resetStagingContainerList;
-(void)addToStagingContainerList:(id)arg1 ;
-(BOOL)updateContainer:(id)arg1 containerType:(id)arg2 identifier:(id)arg3 error:(id*)arg4 ;
-(NSMutableArray *)processedGroupContainer;
-(void)removeAllStagedContainers;
-(BOOL)clearDataContainer:(id)arg1 type:(id)arg2 ;
-(id)stagingPathFor:(id)arg1 ;
-(void)setStagedContainers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stagedContainers;
-(BOOL)updateCustomerAppData:(id)arg1 error:(id*)arg2 ;
@end


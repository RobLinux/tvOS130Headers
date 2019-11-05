/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTInclusionProofVerifier, TransparencyManagedDataStore, NSData, MapEntry, LogEntry;

@interface InclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (nonatomic,copy) NSData * uriVrfoutput; 
@property (nonatomic,retain) MapEntry * mapEntry; 
@property (assign,nonatomic) BOOL hasMapEntry; 
@property (nonatomic,retain) LogEntry * perApplicationTreeEntry; 
@property (assign,nonatomic) BOOL hasPerApplicationTreeEntry; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) BOOL hasTopLevelTreeEntry; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(KTInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTInclusionProofVerifier *)arg1 ;
-(id)mapLeafWithError:(id*)arg1 ;
@end


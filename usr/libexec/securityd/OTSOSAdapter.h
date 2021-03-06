/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OTSOSAdapter <CKKSPeerProvider>
@property (assign) BOOL sosEnabled; 
@required
-(id)fetchTrustedPeers:(id*)arg1;
-(void)updateOctagonKeySetWithAccount:(id)arg1 error:(id*)arg2;
-(id)currentSOSSelf:(id*)arg1;
-(BOOL)sosEnabled;
-(void)setSosEnabled:(BOOL)arg1;
-(int)circleStatus:(id*)arg1;

@end


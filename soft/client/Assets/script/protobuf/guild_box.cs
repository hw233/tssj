//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: guild_box.eproto
namespace dhc
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"guild_box_t")]
  public partial class guild_box_t : global::ProtoBuf.IExtensible
  {
    public guild_box_t() {}
    
    private ulong _guid = default(ulong);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private ulong _guild_guid = default(ulong);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"guild_guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong guild_guid
    {
      get { return _guild_guid; }
      set { _guild_guid = value; }
    }
    private int _mceng = default(int);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"mceng", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int mceng
    {
      get { return _mceng; }
      set { _mceng = value; }
    }
    private int _mindex = default(int);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"mindex", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int mindex
    {
      get { return _mindex; }
      set { _mindex = value; }
    }
    private readonly global::System.Collections.Generic.List<int> _reward_ids = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(5, Name=@"reward_ids", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> reward_ids
    {
      get { return _reward_ids; }
    }
  
    private readonly global::System.Collections.Generic.List<ulong> _reward_guids = new global::System.Collections.Generic.List<ulong>();
    [global::ProtoBuf.ProtoMember(6, Name=@"reward_guids", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<ulong> reward_guids
    {
      get { return _reward_guids; }
    }
  
    private readonly global::System.Collections.Generic.List<string> _reward_names = new global::System.Collections.Generic.List<string>();
    [global::ProtoBuf.ProtoMember(7, Name=@"reward_names", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<string> reward_names
    {
      get { return _reward_names; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _reward_achieves = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(8, Name=@"reward_achieves", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> reward_achieves
    {
      get { return _reward_achieves; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}
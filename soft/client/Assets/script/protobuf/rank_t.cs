//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: rank.eproto
namespace dhc
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"rank_t")]
  public partial class rank_t : global::ProtoBuf.IExtensible
  {
    public rank_t() {}
    
    private ulong _guid = default(ulong);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private readonly global::System.Collections.Generic.List<ulong> _player_guid = new global::System.Collections.Generic.List<ulong>();
    [global::ProtoBuf.ProtoMember(2, Name=@"player_guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<ulong> player_guid
    {
      get { return _player_guid; }
    }
  
    private readonly global::System.Collections.Generic.List<string> _player_name = new global::System.Collections.Generic.List<string>();
    [global::ProtoBuf.ProtoMember(3, Name=@"player_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<string> player_name
    {
      get { return _player_name; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _player_level = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(4, Name=@"player_level", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> player_level
    {
      get { return _player_level; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _player_bf = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(5, Name=@"player_bf", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> player_bf
    {
      get { return _player_bf; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _value = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(6, Name=@"value", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> value
    {
      get { return _value; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _player_template = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(7, Name=@"player_template", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> player_template
    {
      get { return _player_template; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _player_vip = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(8, Name=@"player_vip", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> player_vip
    {
      get { return _player_vip; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _player_achieve = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(9, Name=@"player_achieve", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> player_achieve
    {
      get { return _player_achieve; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _player_huiyi = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(10, Name=@"player_huiyi", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> player_huiyi
    {
      get { return _player_huiyi; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _player_chenghao = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(11, Name=@"player_chenghao", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> player_chenghao
    {
      get { return _player_chenghao; }
    }
  
    private readonly global::System.Collections.Generic.List<int> _player_nalflag = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(12, Name=@"player_nalflag", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> player_nalflag
    {
      get { return _player_nalflag; }
    }
  
    private int _reward_flag = default(int);
    [global::ProtoBuf.ProtoMember(20, IsRequired = false, Name=@"reward_flag", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int reward_flag
    {
      get { return _reward_flag; }
      set { _reward_flag = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}